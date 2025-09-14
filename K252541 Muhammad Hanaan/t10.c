#include <stdio.h>
#include <windows.h>

int main() {
    int a, h, p, f, z, s, c;
    float ci;

    printf("Enter your Akhlaq & Manners score (0-10): ");
    scanf("%d", &a);
    if (a < 0 || a > 10){
    	printf ("Enter valid number");
    	return 0;
    }

    printf("Enter your Honesty & Trustworthiness score (0-10): ");
    scanf("%d", &h);
    if (h < 0 || h > 10){
    	printf ("Enter valid number");
    	return 0;
    }

    printf("Enter your Prayer Regularity (0 = Irregular, 1 = Regular): ");
    scanf("%d", &p);
    if (p < 0 || p > 1){
    	printf ("Enter valid number");
    	return 0;
	}

    printf("Enter your Fasting (0 = Never, 1 = Sometimes, 2 = Always): ");
    scanf("%d", &f);
     if (f < 0 || f > 2){
    	printf ("Enter valid number");
    	return 0;
	}

    printf("Enter your Zakat & Charity score (0-10): ");
    scanf("%d", &z);
      if (z < 0 || z > 10){
    	printf ("Enter valid number");
    	return 0;
    }


    printf("Enter your Social Behavior score (0-10): ");
    scanf("%d", &s);
      if (s < 0 || s > 10){
    	printf ("Enter valid number");
    	return 0;
    }


    printf("Enter your Conflict Resolution Skills score (0-10): ");
    scanf("%d", &c);

    ci = (a * 2.5) + (h * 2.0) + (p * 15) + (f * 5) +
         (z * 1.0) + (s * 1.0) + (c * 1.0);

    printf("\nCI = %.2f\n", ci);
 //special characters like the check, cross, smiley face, and warning are not valid so i used some keys for a similar impression

    if (ci >= 85 && ci <= 100) {
        printf("Classification: Excellent Muslim Character [_/]  ");
        if (ci > 95) {
            printf("Remarks: Outstanding! Role model for society");
        } else {
            printf("Remarks: Role model for society");
        }
    }
    else if (ci >= 70 && ci <= 84) {
        printf("Classification: Good Muslim Character [:)]" );
        if (ci >= 80) {
            printf("Remarks: Very strong practicing believer");
        } else {
            printf("Remarks: Practicing believer");
        }
    }
    else if (ci >= 50 && ci <= 69) {
        printf("Classification: Average Character [!!]");
        if (ci >= 60) {
            printf("Remarks: Almost good, needs slight improvement ");
        } else {
            printf("Remarks: Needs minor improvement");
        }
    }
    else if (ci >= 30 && ci <= 49) {
        printf("Classification: Needs Improvement [!]");
        printf("Remarks: Work on Akhlaq & Ibadah");
    }
    else {
        printf("Classification: Weak Character [x] ?");
        printf("Remarks: Requires serious guidance");
    }

    return 0;
}

