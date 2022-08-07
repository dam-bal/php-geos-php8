PHP module for GEOS
===================

The code in this directory provides a PHP module to make use
of functionalities of the [GEOS library] (http://geos.osgeo.org).

The bindings are linked to the C-API, for betters stability.

# Building

## Requirements

You need:

  - PHP development files
    ( often found in packages named something like 'php{version}-dev' )

  - GEOS development files
    ( often found in packages named something like 'libgeos-dev/geos-dev' )

## Procedure

    git clone https://github.com/dam-bal/php-geos-php8.git
    cd php-geos-php8
    ./autogen.sh
    ./configure
    make

# Testing

Automated testing is executed on 'make check'.

You'll need phpunit installed for this to work. To install:

    pear install --force --alldeps phpunit/phpunit

# Installing

As root (or owner with write access to the directory
returned by php-config --extension-dir), run:

    make install
