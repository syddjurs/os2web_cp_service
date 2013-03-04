api = 2
core = 7.x

;; OS2Web projects:

; OS2Web Modules
projects[os2web][type] = "module"
projects[os2web][download][type] = "git"
projects[os2web][download][tag] = "1.10"
projects[os2web][download][branch] = "master"
projects[os2web][download][url] = "git://github.com/OS2web/os2web.git"

;; Contrib modules below:

; Libraries

; Contrib modules

; Features + related
projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

;Views
projects[views][subdir] = "contrib"
projects[views][version] = "3.5"
projects[views][patch][] = "http://drupal.org/files/combine_and_contains_word-1782678-9.patch"

projects[views_php][subdir] = "contrib"
projects[views_php][version] = "1.x-dev"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"
; Panels
projects[panels][subdir] = "contrib"
projects[panels][version] = "3.2"


; Basic
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[references][subdir] = "contrib"
projects[references][version] = "2.0"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.1"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.0"
