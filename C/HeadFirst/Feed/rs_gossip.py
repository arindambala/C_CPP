import urllib
import os
import sys
import re
import string
import unicodedata
import getopt
from xml.dom import minidom

def usage():
    print("\nUsage - \npython rs_gossip.py [-uh] <search-regexp>")

try:
    opts, args = getopt.getopt(sys.argv[1:], "uh", ["urls", "help"])
except getopt.GetoptError as err:
    print(str(err))
    usage()
    sys.exit(2)

include_urls = False