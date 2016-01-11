Adapt status module
====================

> ### Variables
> * adapt_status_remote_endpoint contains the endpoint url of where the data is sent. Empty by default.
> * adapt_status_site_id contains the site ID, which should be unique. Set to "dev" by default.
> * adapt_status_enabled defines if the module should push data. Disabled by default for dev purposes.

### Hooks

#### hook_adapt_status_data_alter()
Used for altering the data sent to the remote server. The data is an
assosciative array formatted in the following way:

>
> array(
>   core =>
>    drupal =>
>      version => X.XX
>    contrib =>
>      module =>
>        version => X.XX
>      module =>
>        version => X.XX
>      module =>
>        version => X.XX
>    libraries =>
>      library
>      library2
>    jquery_version => X.X
> )
>
