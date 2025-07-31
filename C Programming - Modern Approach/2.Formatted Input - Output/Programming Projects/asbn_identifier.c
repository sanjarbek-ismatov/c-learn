#include <stdio.h>

int main() {
  int gsi_pref, group_id, publish_code, item_num, check_dig;
  scanf("%d-%d-%d-%d-%d", &gsi_pref, &group_id, &publish_code, &item_num,
        &check_dig);
  printf("GSI prefix: %d\n", gsi_pref);
  printf("Group identifier: %d\n", group_id);
  printf("Publisher code: %d\n", publish_code);
  printf("Item number: %d\n", item_num);
  printf("Check digit: %d\n", check_dig);
  return 0;
}