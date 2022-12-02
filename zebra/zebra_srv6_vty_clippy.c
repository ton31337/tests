/* locator_prefix => "prefix X:X::X:X/M$prefix [func-bits (0-64)$func_bit_len]" */
DEFUN_CMD_FUNC_DECL(locator_prefix)
#define funcdecl_locator_prefix static int locator_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	long func_bit_len,\
	const char * func_bit_len_str __attribute__ ((unused)))
funcdecl_locator_prefix;
DEFUN_CMD_FUNC_TEXT(locator_prefix)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	long func_bit_len = 0;
	const char *func_bit_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "func_bit_len")) {
			func_bit_len_str = argv[_i]->arg;
			char *_end;
			func_bit_len = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return locator_prefix_magic(self, vty, argc, argv, &prefix, prefix_str, func_bit_len, func_bit_len_str);
}

