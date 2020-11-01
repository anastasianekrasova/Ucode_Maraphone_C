#include <stdio.h>
#include <string.h>
    
int mx_strcmp(const char *s1, const char *s2) {
	while (*s1 == *s2) {
		if (*s1 == '\0' && *s2 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

// int mx_strcmp(const char *s1, const char *s2) {
//   while(*s1 && *s1 == *s2) {
//     if(*s1 == '\0' && *s2 == '\0') {
//       return 0;
//     }
//     s1++;
//     s2++;
//   }
//   return *s1 - *s2;
// }

// int main(){
//     int i = mx_strcmp("kjHvkHKKVkj","kjhvKhKKVkj");
//     printf("%i\n", i);
// }