#include<stdio.h>
//201703779 ÇãÃ¢Çö

//#5-1
//int main() {
//
//	int n,d=0;
//	printf(" Enter a num : ");
//	scanf_s("%d",&n);
//
//	if (n > 0 && n < 10) d = 1;
//	else if (n >= 10 && n < 100) d = 2;
//	else if (n >= 100 && n < 1000) d = 3;
//	else if (n >= 1000 && n < 10000) d = 4;
//	else {
//		printf("**error**");
//		return 0;
//	}
//	printf("the num %d has %d digits",n,d);
//}


//#5-2
//int main() {
//	int h, m;
//	printf("Enter a 24-hour time : ");
//	scanf_s("%d:%d", &h,&m);
//
//	if (h < 12) {
//		printf("Equivalent 12-hour time : %d : %d AM",h,m);
//	}
//	else if (h == 12) {
//		printf("Equivalent 12-hour time : %d : %d PM",h,m);
//	}
//	else if (h>12 && h < 24) {
//		printf("Equivalent 12-hour time : %d : %d PM",h-12,m);
//	}
//	else if (h == 24) {
//		printf("Equivalent 12-hour time : 00 : %d AM",m);
//	}
//}




//#5-4
//int main() {
//	float s;
//
//	printf("Enter the speed(Knots) : ");
//	scanf_s("%f", &s);
//
//		if (s < 1) printf("Calm"); 
//		else if (s <= 3) printf("Light air"); 
//		else if (s <= 27) printf("Breeze"); 
//		else if (s <= 47) printf("Gale"); 
//		else if (s <= 63) printf("Storm");
//		else if (s > 63) printf("Hurricane");    
//		else printf("** error **");
//	}


//#5-5
//int main(){
//    float in, tax;
//
//    printf("Enter amount of taxable in: ");
//    scanf_s("%f", &in);
//
//    printf("Tax due is: $");
//
//    if (in < 750.00f) printf("%.2f", in * .01);
//    else if (in < 2250.00f) printf("%.2f", 7.50f + ((in - 750.0f) * .02));
//    else if (in < 3750.00f) printf("%.2f", 37.50f + ((in - 2250.0f) * .03));
//    else if (in < 5250.00f) printf("%.2f", 82.50f + ((in - 3750.0f) * .04));
//    else if (in < 7000.00f) printf("%.2f", 142.50f + ((in - 5250.0f) * .05));
//    else printf("%.2f", 230.00f + ((in - 7000.0f) * .06));
//}



//#5-7
//int main() {
//	int i1, i2, i3, i4, i,t;
//	printf("Enter four integers : ");
//	scanf_s("%d %d %d %d", &i1, &i2, &i3, &i4);
//
//	for (i = 0; i < 4; i++) {
//		if (i1 > i2) {
//			t = i1;
//			i1 = i2;
//			i2 = t;
//		}
//		if (i2 > i3) {
//			t = i2;
//			i2 = i3;
//			i3 = t;
//		}
//		if (i3 > i4) {
//			t = i3;
//			i3 = i4;
//			i4 = t;
//		}
//	}
//	//printf("%d  %d  %d  %d", i4, i3, i2, i1);
//	printf("Largest  : %d\nSmallest : %d",i4,i1);
//}


//#5-8
//int main(){
//
//    int hour, min, h_min, am_8, am_9, am_11, pm_12, pm_2, pm_3, pm_7, pm_9, midnight;
//
//    printf("Enter a 24-hour time : ");
//    scanf_s("%d:%d", &hour, &min);
//
//    midnight = 23 * 60 + 59;
//    h_min = hour * 60 + min;
//    am_8 = 8 * 60;
//    am_9 = 9 * 60 + 43;
//    am_11 = 11 * 60 + 19;
//    pm_12 = 12 * 60 + 47;
//    pm_2 = 14 * 60;
//    pm_3 = 15 * 60 + 45;
//    pm_7 = 19 * 60;
//    pm_9 = 21 * 60 + 45;
//   
//
//    if (h_min >= 24 * 60 || h_min <= 0)
//        printf("Invalid hh:mm entry");
//    else {
//        printf("Closest departure time is: ");
//
//        if (h_min >= 1 && h_min < am_8)
//            printf("8:00 am, arriving at 10:15 am");
//
//        if (h_min >= am_8 && h_min < am_9) {
//            if (am_9 - h_min < h_min - am_8)
//                printf("9:43 am, arriving at 11:52 am");
//            else
//                printf("8:00 am, arriving at 10:15 am");
//        }
//
//        if (h_min >= am_9 && h_min < am_11) {
//            if (am_11 - h_min < h_min - am_9)
//                printf("11:19 am, arriving at 1:30 pm");
//            else
//                printf("9:43 am, arriving at 11:52 am");
//        }
//        if (h_min >= am_11 && h_min < pm_12) {
//            if (pm_12 - h_min < h_min - am_11)
//                printf("12:47 pm, arriving at 3:00 pm");
//            else
//                printf("11:19 am, arriving at 1:30 pm");
//        }
//        if (h_min >= pm_12 && h_min < pm_2) {
//            if (pm_2 - h_min < h_min - pm_12)
//                printf("2:00 pm, arriving at 4:08 pm");
//            else
//                printf("12:47 pm, arriving at 3:00 pm");
//        }
//        if (h_min >= pm_2 && h_min < pm_3) {
//            if (pm_3 - h_min < h_min - pm_2)
//                printf("3:45 pm, arriving at 5:55 pm");
//            else
//                printf("2:00 pm, arriving at 4:08 pm");
//        }
//        if (h_min >= pm_3 && h_min < pm_7) {
//            if (pm_7 - h_min < h_min - pm_3)
//                printf("7:00 pm, arriving at 9:20 pm");
//            else
//                printf("3:45 pm, arriving at 5:55 pm");
//        }
//        if (h_min >= pm_7 && h_min < pm_9) {
//            if (pm_9 - h_min < h_min - pm_7)
//                printf("9:45 pm, arriving at 11:58 pm");
//            else
//                printf("7:00 pm, arriving at 9:20 pm");
//        }
//        if (h_min >= pm_9 && h_min <= midnight)
//            printf("9:45 pm, arriving 11:58 pm");
//    }
//}



//#5-10
//int main() {
//
//	int num, n1;
//
//	printf("Enter numerical grade : ");
//	scanf_s("%d", &num);
//
//	n1 = num / 10;
//
//	if (num > 100 || num < 0) {
//		printf("**error**");
//		return 0;
//	}
//	
//	printf("Letter grade : ");
//	switch (n1) {
//		case 10:
//		case 9:
//			printf("A");
//			break;
//
//		case 8:
//			printf("B");
//			break;
//
//		case 7:
//			printf("C");
//			break;
//
//		case 6:
//			printf("D");
//			break;
//
//		default :
//			printf("F");
//			break;
//		}
//	}



//#5-11
//int main(){
//
//    int num, n1, n2;
//
//    printf("Enter a two-digit num: ");
//    scanf_s("%d", &num);
//
//    if (num < 10 || num > 99) {
//        printf("The num did not contain two digits\n\n");
//        return 0;
//    }
//
//    n1 = num - (num % 10);
//    n2 = num % 10;
//
//    printf("You entered the num ");
//
//    if (n1 == 10) {
//        switch (n2) {
//        case 0: printf("ten");
//            break;
//        case 1: printf("eleven");
//            break;
//        case 2: printf("twelve");
//            break;
//        case 3: printf("thirteen");
//            break;
//        case 4: printf("fourteen");
//            break;
//        case 5: printf("fifteen");
//            break;
//        case 6: printf("sixteen");
//            break;
//        case 7: printf("seventeen");
//            break;
//        case 8: printf("eighteen");
//            break;
//        case 9: printf("nineteen");
//            break;
//        }
//        printf(".\n\n");
//        return 0;
//    }
//
//    switch (n1) {
//    case 20: printf("twenty");
//        break;
//    case 30: printf("thirty");
//        break;
//    case 40: printf("forty");
//        break;
//    case 50: printf("fifty");
//        break;
//    case 60: printf("sixty");
//        break;
//    case 70: printf("seventy");
//        break;
//    case 80: printf("eighty");
//        break;
//    case 90: printf("ninety");
//        break;
//    }
//
//    switch (n2) {
//    case 1: printf("-one");
//        break;
//    case 2: printf("-two");
//        break;
//    case 3: printf("-three");
//        break;
//    case 4: printf("-four");
//        break;
//    case 5: printf("-five");
//        break;
//    case 6: printf("-six");
//        break;
//    case 7: printf("-seven");
//        break;
//    case 9: printf("-nine");
//        break;
//    }
//}