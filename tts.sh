#!/bin/bash
#say() { 
#    local IFS=+;/usr/bin/mplayer -ao alsa -really-quiet -noconsolecontrols "http://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&q=$*&tl=en"; 
#}
#say $*

MY_SAYING="$2"
MY_URL="http://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&q=${MY_SAYING// /%20}&tl=en"

echo $MY_URL
curl $MY_URL -H 'Accept-Encoding: gzip, deflate' -H 'Accept-Language: en-US,en;q=0.9' -H 'Upgrade-Insecure-Requests: 1' -H 'User-Agent: Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.108 Safari/537.36' -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8' -H 'Cache-Control: max-age=0' -H 'Cookie: HSID=AfLEd7olxGRk1lbCT; APISID=scugh4cSBwTWoGYr/AH51TuCknp0PxrTlj; SID=uAVIcFemMoZqcH6r48nCoytdzHIMW7dXGPWSOAv83BdeCuBaT4HyeZYqVOb4dPS8AC7dsw.; _ga=GA1.3.855533823.1517542938; _gid=GA1.3.478203520.1517542938; NID=122=YF0dLH5JQUd3HunG-KgNY3SoSydzogDr6DYa5caFqcUFwhI4-y2JtD4skQ2rH2tOPj1JYy_KJhZoy-jAPCl0SVpV8vcAA1s6A3ft0XKQad1hp5XSOgswfD0ATu7-WF5wdvHDeM6o6IH4es-YfQUhX7zuZWZoKBeCvjv9L7j0Fsi2fBAa-9hErOemW6nI-MeO2xZlmpnUsU7WHzqgIkZp27pt4p9zYw_qhIy990rYuvGzn8v3cTfZEfgkDWK9; 1P_JAR=2018-2-2-3; SIDCC=AAiTGe8BrSTktmvE6Sv7Knl2zs3djHwuqH2EDJhlKnx9iSYzeWfKAkQUQFx9ZvskOUNTiBfKdf8sdva-4cw' -H 'Connection: keep-alive' --compressed > $1

echo "wrote to $1"
