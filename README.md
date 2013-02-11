Drupal Webroot
==============

Drupal-webroot repository will contain Drupal core (with all its history) and Contributed
Modules. 7.x-1.x-dev is the branch where all the action lies, this branch will be
kept upto date with future Drupal 7 releases (currently its in sync with Drupal 7.19)

Commit Policy
=============

This repo will be merge only, human commits should be kept to bare minimum. If you
wish to get a contributed module added to this repo, then fork the branch and send
a pull request and after discussion on why/what on module, it'll be merged into drupal-webroot

Symlinks to Drupal aap campaign
===============================

This repo will have appropriate symlinks to appropriate folders in drupal-aap-campaign
repo. You can find symlinks in the following locations:

* drupal-webroot/profiles/
* drupal-webroot/sites/all/modules/
* drupal-webroot/sites/all/themes/


Setting up your AAP campaign site (without data)
=================================

Setup should be simple, go to the folder you wish to be your DocumentRoot and
do the following:

* git clone git@github.com:code4aap/drupal-webroot.git
* git clone git@github.com:code4aap/drupal-aap-campaign.git
* Create a database using mysqladmin or any other tool
* Visit the installation page and follow the steps in AAP campaign profile.

We use features and profiles to auto setup everything.

Setting up your AAP campaign site ( with data )
===============================================

* Follow 3 steps from above.
* Request santize databse from devs and import in the database created in step 3.

In future, we might have a content strategy and you should be able to sync data
in runtime from staging site using drush.
