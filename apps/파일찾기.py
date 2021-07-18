import os


def scanDir(path):

	print("current path: {}".format(path))

	filenames = os.listdir(path)

	for file in filenames:
		
		if os.path.isdir(path+'/'+file):	
			
			print("found folder: {}".format(file))

			scanDir(path+'/'+file)

		else:			
			print("found file: {}".format(file))


path = os.getcwd() # current dir path

scanDir(path)

