#include <Windows.h>
#include <WebView2.h>

#pragma comment(lib, "WebView2Loader.lib")

// Callback for when the WebView2 control is created
HRESULT STDMETHODCALLTYPE MyWebView2CreateCompletedHandler(HRESULT result, IWebView2Environment *env, IWebView2WebView *webview) {
    if (webview != NULL) {
        // Navigate to a URL
        LPCWSTR url = L"https://www.example.com";
        webview->Navigate(url);

        // Show the window containing the WebView2 control
        ShowWindow(webview->GetParentWindow(), SW_SHOW);
    }

    return S_OK;
}

int main() {
    // Initialize COM
    CoInitialize(NULL);

    // Create a WebView2 environment
    HRESULT hr = CreateWebView2Environment(NULL, NULL, NULL, MyWebView2CreateCompletedHandler);
    if (!SUCCEEDED(hr)) {
        MessageBox(NULL, L"Failed to create WebView2 environment.", L"Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    // Run the message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // Clean up COM
    CoUninitialize();

    return 0;
}
