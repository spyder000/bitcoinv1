from distutils.core import setup
setup(name='btc1spendfrom',
      version='1.0',
      description='Command-line utility for bitcoinv1 "coin control"',
      author='Gavin Andresen',
      author_email='gavin@bitcoinv1foundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
