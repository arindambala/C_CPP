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

include_urls = False