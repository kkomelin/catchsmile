## Catch a Smile Drupal 7 module

### Description
Part of demo project for DrupalConf Moscow 2012 (02.06.2012).

The module contains:
* Views plugin for Catch a Smile Photo Gallery.
* Web service that calculates count of catchsmile nodes.
* JavaScript code that performs page refreshing if count of catchsmile nodes is changed.

### Dependencies
* views (3.x)
* lightbox2
* services (3.x)

### Installation and configuration
1. Install Drupal 7
2. Install and enable Catch Smile module and REST Server module and their dependencies.
3. Add Services 3 REST endpoind (Path to endpoint = endpoint1)
4. Configure formatters for the endpoint.

  - Response formatters (json, xml)
  - Request parsing (application/json, application/x-www-form-urlencoded)

5. Enable Service 3 resources:
  - catchsmile -> count
  - file -> create
  - node -> create
6. Set permissions for an anonymous user:
  - Node -> CatchSmile Photo: Create new content
  - Sevices -> Save file information
7. See Installation and configuration section of CatchSmile WP7 app to configure interoperability between these two apps.
https://github.com/konstantin-komelin/catchsmile-wp7

### License
I provide the module "AS IS" without any warranty.
Probably GitHub is temporary storage for this module because of Drupal rules.

### Contacts
Feel free to contact with me using http://komelin.com/contact if you have any questions.