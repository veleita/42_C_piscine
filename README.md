⚠️[ongoing]⚠️

I passed this piscine in October 2019 before I started the 42 cursus as a student in the Madrid campus.

I thought it would be interesting to review my exercises and complete those I didn't finish back in the day.
All of the original code is still there, but I have also made some additions for those exercises I would do differently now.
My idea is for this repository to be some kind of time machine for my domain on C.

## sh00
Succeeded with 100%

ex00 -- Original

	Test:
			cat z
	Output:
			Z$

ex01 -- Modified

	Test:
			tar -tvf testShell00.tar
	Output:
			-r--r-xr-x  0 XX XX 40 Jun  1 23:42 testShell00

For more info:

	man touch
	man chmod

ex02 -- Original

	Test:
			tar -xvf exo2.tar
			ls -l
	Output:
			total 33
			-rw-r--r--  1 XX XX XX Jun  2 15:35 exo2.tar
			drwx--xr-x  2 XX XX XX Jun  1  2019 test0
			-rwx--xr--  1 XX XX  4 Jun  1  2019 test1
			dr-x---r--  2 XX XX XX Jun  1  2019 test2
			-r-----r--  2 XX XX  1 Jun  1  2019 test3
			-rw-r----x  1 XX XX  2 Jun  1  2019 test4
			-r-----r--  2 XX XX  1 Jun  1  2019 test5
			lrwxrwxrwx  1 XX XX  5 Jun  1  2019 test6 -> test0

For more info:

	man touch
	man chmod

ex03 -- Original

	Test:
			cat klist.txt
	Output:
			Credentials cache: API:809EBF00-20FB-48C4-9A95-081C01C20010
      				  Principal: mzomeno-@42MADRID.COM

  		Issued                Expires               Principal
	Sep 30 16:17:34 2019  Oct  1 02:17:13 2019  krbtgt/42MADRID.COM@42MADRID.COM

For more info:

	man kerberos
	man kinit

ex04 -- Original

	Test:
			cat midLS
	Output:
			ls -t -U -p -m

For more info:

	man ls

ex05 -- Original

	Test:
			cat git_commit.sh
	Output:
			# /bin/sh
			git log --format="%H" -n 5

For more info:

	man git-log (/PRETTY FORMATS)

ex06 -- Original

	Test:
			cat git_ignore.sh
	Output:
			#! /bin/sh
			git ls-files $(git rev-parse --show-toplevel) -i -o --exclude-standard

For more info:

	man gitignore
	man git-ls-files
	man git-rev-parse

ex07 --

	Test:
			tar -xvf resources.tar.gz
			diff a b > test
			diff sw.diff test
	Output:
			Nothing (test and sw.diff must be equal, so diff shouldn't show any output)

For more info:

	man diff
	man patch


ex08 --

	Test:
			cat clean
	Output:
			#!/bin/sh
			find . -type f -name "#*#" -print -delete -o -type f -name "*~" -print -delete

ex09 --

	Test:
			
	Output:
			


## c00
Succeeded with 70%
