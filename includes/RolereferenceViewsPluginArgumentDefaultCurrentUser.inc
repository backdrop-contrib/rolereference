  <?php
/**
 * @file
 * Contains the current user argument default plugin.
 */

/**
 * Default argument plugin to extract the global $user
 *
 * This plugin actually has no options so it does not need to do a great deal.
 */
class RolereferenceViewsPluginArgumentDefaultCurrentUser extends views_plugin_argument_default {

  /**
   * Default current user argument
   */
  function get_argument() {
    global $user;
    $rids = array_keys($user->roles);
    return implode("+", $rids);
  }

}
