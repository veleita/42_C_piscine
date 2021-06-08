⚠️[ongoing]⚠️

I passed this piscine in October 2019 before I started the 42 cursus as a student in the Madrid campus.

I thought it would be interesting to review my exercises and complete those I didn't finish back in the day.
All of the original code is still there, but I have also made some additions for those exercises I would do differently now.
My idea is for this repository to be some kind of time machine for my domain on C.

This huge readme will be later written into a wiki.

### sh00 ✅

## sh01 🔜
Succeeded with 70%

### ex01 -- Original

	Test:
			chmod +x print_groups.sh
			./print_groups.sh
	Output:
			2019,everyone,netaccounts,_developer
			// this should be the output for FT_USER="", but it may vary in different machines

	More info:
			man id
			https://www.tutorialspoint.com/unix/unix-regular-expressions.htm
			man tr
---

### ex02 -- Original

	Test:
			chmod +x find_sh.sh
			cd ..
			bash ex02/find_sh.sh
	Output:
			count_files$
			print_groups$
			find_sh$
			MAC$
			skip$
			r_dwssap$

	More info:
			man find
			man basename
---

### ex03 -- Original

	Test:
			chmod +x count_files.sh
			./count_files.sh
	Output:
			2

	More info:
			man find
			man wc
---

### ex04 -- Original

	Test:
			chmod +x find_sh.sh
			cd ..
			bash ex02/find_sh.sh
	Output:
			a list of MAC directions in this format:
			
			38:f9:d3:14:39:6d
			ea:00:c4:c9:15:00
			ea:00:c4:c9:15:01
			ea:00:c4:c9:15:00
			a6:83:e7:12:b1:cb
			a4:83:e7:12:b1:cb
			06:83:e7:12:b1:cb
			62:5a:ab:87:90:a1

			(these are the MAC directions for my computer, they should be different in yours)

	More info:
			man ifconfig
			man grep
			man cut
---

### ex05 -- Original

	Test:
			ls -l && cat \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
	Output:
			total 1
			-rw-r--r-- 1 XX XX 2 XX XX XX:XX "\?$*'MaRViN'*$?\"
			42%

	More info:
			man ls (/Long Format)
			https://www.shellscript.sh/escape.html
---

### ex06 -- Original

	Test:
			chmod +x skip.sh
			cd ..
			bash ex06/skip.sh
	Output:
			total 2743
			drwxr-xr-x 2 XX XX 4096 XX XX ex01
			rwxr-xr-x  2 XX XX 4096 XX XX ex03
			rwxr-xr-x  2 XX XX 4096 XX XX ex05
			rwxr-xr-x  2 XX XX 4096 XX XX ex07

	More info:
			man awk (/NR)
---

### ex07 -- Added

	Test:
			chmod +x r_dwssap.sh
			export FT_LINE1=2
			export FT_LINE1=9 (you can change this range as you like)
			bash r_dwssap.sh
	Output:
			yapelppa_, www_, vamalc_, toorsmvc_, toor, tocevod_, tnegaevitpac_, svc_.%
			(the users may differ)

	More info:
			https://www.tutorialspoint.com/unix/unix-regular-expressions.htm
			man tr
---

### ex08 -- Added

	Test:
			export FT_NBR1=\\\'\?\"\\\"\'\\
			export FT_NBR2=rcrdmddd
			chmod +x add_chelou.sh
			bash add_chelou.sh
	Output:
			Salut
	More info:
			man tr
			man bc (/VARIABLES)
			https://www.shellscript.sh/escape.html

## c00 🔜
Succeeded with 70%
