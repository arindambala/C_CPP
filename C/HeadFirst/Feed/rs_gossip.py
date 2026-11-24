import urllib
import os
import sys
import re
import string

def usage():
    print("\nUsage - \npython rs_gossip.py [-uh] <search-regexp>")

include_urls = False