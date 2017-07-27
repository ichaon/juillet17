ldapsearch -Q uid='z*' | grep cn: | sort -fr | cut -b 5-
