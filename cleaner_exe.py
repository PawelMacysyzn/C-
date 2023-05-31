

# Show all filenames with .exe extension        ☑
# Remove them and get status                    ☑
# Add option list of folders to be ignored      ☑
# Add add-on to remove another extension        ☑
# Add option in command prompt for that         ☐


############### CODE #####################
import types
import os
import sys
import argparse


BLUE = "\033[34m"
GREEN = "\033[32m"
CYELLOW = '\033[93m'
RED = "\033[31m"
RESET = '\033[0m'


def cmd_support():
    '''
    # cmd support
    '''

    parser = argparse.ArgumentParser(description='Allows for cmd support')

    parser.add_argument('--find', '-f', dest='search_string',
                        type=str, help='Search string')
    parser.add_argument('--where', '-w', dest='search_location',
                        type=str, help='Search location')
    parser.add_argument('--ignore', '-i', dest='ignored_folders',
                        type=str, nargs='+', help='Ignored folders')

    parser.set_defaults(search_string=None, ignored_folders=[])

    args = parser.parse_args()

    return args.search_string, args.search_location, args.ignored_folders


def walk_thrue_files_by_walk(path: str, file_extension: str, ignored_folders: list) -> types.GeneratorType:
    '''
    # Walk thru files by walk
    * path (str) - specified path
    * file_extension (str) - searched phrase
    * ignored_folders (list) - list of folders to be ignored
    '''

    found_files = False

    for dir_name, subdirs, filenames in os.walk(path):

        # Remove ignored folders from subdirs list
        subdirs[:] = [d for d in subdirs if d not in ignored_folders]

        for filename in filenames:
            if filename.endswith(file_extension):
                fullFileName = os.path.join(dir_name, filename)
                yield fullFileName
                found_files = True

    if not found_files:
        print(f"{CYELLOW}No files found with the specified extension!{RESET}")


def show_searching_files(path: str = os.getcwd(), file_extension: str = '.py', ignored_folders: list = []):
    '''
    # Shows all searched files
    * path (str) - specified path
    * file_extension (str) - searched phrase
    * ignored_folders (list) - list of folders to be ignored
    '''
    generator_files = walk_thrue_files_by_walk(
        path, file_extension, ignored_folders)
    print("="*90)
    for (num, elem) in enumerate(generator_files, start=1):
        print(f"{num}. {BLUE}{elem}{RESET}")
    print("="*90)


def remove_file(file_path: str):
    '''
    # Remove file from path
    * file_path (str) - "path/to/file.txt"
    '''

    try:
        os.remove(file_path)
        print(
            f"{GREEN}File{RESET} {BLUE}{file_path}{RESET} {GREEN}has been successfully deleted.{RESET}")
    except FileNotFoundError:
        print(
            f"{CYELLOW}File {RESET}{BLUE}{file_path}{RESET} {CYELLOW}not found.{RESET}")
    except PermissionError:
        print(f"{CYELLOW}Permission denied for file{RESET} {BLUE}{file_path}{RESET}.")
    except OSError as e:
        print(
            f"{CYELLOW}Error occurred while deleting file {RESET} {BLUE}{file_path}{RESET}: \n{e}")


def remove_all_files(path: str, file_extension: str, ignored_folders: list = []):
    '''
    # Remove all files from path
    * path (str) - specified path
    * file_extension (str) - searched phrase
    * ignored_folders (list) - list of folders to be ignored
    '''

    generator_files = walk_thrue_files_by_walk(
        path, file_extension, ignored_folders)

    for (num, elem) in enumerate(generator_files, start=1):
        remove_file(elem)

    print("="*90)
    print(f"{GREEN}({num}){RESET} {CYELLOW}Number of files with the extension:{RESET} {RED}{file_extension}{RESET} {CYELLOW}removed{RESET}")
    print("="*90)


def test():

    ######################################
    ################ TEST ################
    ######################################

    my_test_folder = r"C:\Users\pmacyszyn_adm\Documents\C++\CPP\TEST"
    file_extension = '.py'
    ignored_folders = ["folder 2"]

    show_searching_files(my_test_folder, file_extension)
    # remove_all_files(my_test_folder, file_extension, ignored_folders)

    ######################################
    ################ END #################
    ######################################


def main():

    ######################################
    ############ CODE HERE ###############
    ######################################
    
    # test()

    search_string, search_location, ignored_folders = cmd_support()
    # print(cmd_support())

    if search_string is not None and search_location is not None and ignored_folders is not None:
        show_searching_files(search_location, search_string, ignored_folders)
        print("OPT_1")
    elif search_string is not None:
        show_searching_files(file_extension =search_string, ignored_folders=ignored_folders)
        print("OPT_2")
    else:
        show_searching_files(ignored_folders=ignored_folders)
        print("OPT_3")

    ######################################
    ################ END #################
    ######################################
    pass



if __name__ == "__main__":
    main()
