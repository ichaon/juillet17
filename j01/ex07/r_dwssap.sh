cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | rev | sort -r | cut -d : -f7 | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, *$/./'
