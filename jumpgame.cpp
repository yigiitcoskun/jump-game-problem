#include <stdio.h>

bool jump();

int main(){

printf("%i", jump());

}

bool jump(){
	int nums[5];
	for(int j = 0; j <5; j++)
		scanf("%d", &nums[j]);
	int k = 1;
	while(k<4){
	  if(nums[k] != 0){
	    k = k + nums[k];
	  } else {
	    return 0;
	  }
	}
	if(nums[k] == nums[4]){
	  return 1;
	} else {
	  return 0;
	}


}
