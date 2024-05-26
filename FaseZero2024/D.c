#include <stdio.h>
#define ll long long

int main(void) {
  ll km, kh;
  scanf("%lld %lld", &km, &kh);
  ll horas = (km / kh + 19) % 24;
  if(horas < 10) printf("0%lld", horas);
  else printf("%lld", horas);
  ll minutos = (km % kh) * 60 / kh;
  if(minutos < 10) printf(":0%lld\n",minutos);
  else printf(":%lld\n",minutos);
}'