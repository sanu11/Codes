import sys,os,subprocess
os.system(" g++ test.cpp")
print os.system(" timeout 1 ./a.out ")
try:
	cmnd_output = subprocess.check_output("./a.out", shell=True, universal_newlines=True);                         
except subprocess.CalledProcessError as exc:
	print "error\n"