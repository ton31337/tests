/* vrf_netns => "netns NAME$netns_name" */
DEFUN_CMD_FUNC_DECL(vrf_netns)
#define funcdecl_vrf_netns static int vrf_netns_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * netns_name)
funcdecl_vrf_netns;
DEFUN_CMD_FUNC_TEXT(vrf_netns)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *netns_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "netns_name")) {
			netns_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!netns_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "netns_name");
		return CMD_WARNING;
	}

	return vrf_netns_magic(self, vty, argc, argv, netns_name);
}

