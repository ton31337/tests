/* area_nssa_range => "area <A.B.C.D|(0-4294967295)>$area nssa range X:X::X:X/M$prefix [<not-advertise$not_adv|cost (0-16777215)$cost>]" */
DEFUN_CMD_FUNC_DECL(area_nssa_range)
#define funcdecl_area_nssa_range static int area_nssa_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * not_adv,\
	long cost,\
	const char * cost_str __attribute__ ((unused)))
funcdecl_area_nssa_range;
DEFUN_CMD_FUNC_TEXT(area_nssa_range)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	const char *not_adv = NULL;
	long cost = 0;
	const char *cost_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area")) {
			area = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "not_adv")) {
			not_adv = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "cost")) {
			cost_str = argv[_i]->arg;
			char *_end;
			cost = strtol(argv[_i]->arg, &_end, 10);
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
	if (!area) {
		vty_out(vty, "Internal CLI error [%s]\n", "area");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return area_nssa_range_magic(self, vty, argc, argv, area, &prefix, prefix_str, not_adv, cost, cost_str);
}

/* no_area_nssa_range => "no area <A.B.C.D|(0-4294967295)>$area nssa range X:X::X:X/M$prefix [<not-advertise|cost (0-16777215)>]" */
DEFUN_CMD_FUNC_DECL(no_area_nssa_range)
#define funcdecl_no_area_nssa_range static int no_area_nssa_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	long cost,\
	const char * cost_str __attribute__ ((unused)))
funcdecl_no_area_nssa_range;
DEFUN_CMD_FUNC_TEXT(no_area_nssa_range)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	long cost = 0;
	const char *cost_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area")) {
			area = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "cost")) {
			cost_str = argv[_i]->arg;
			char *_end;
			cost = strtol(argv[_i]->arg, &_end, 10);
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
	if (!area) {
		vty_out(vty, "Internal CLI error [%s]\n", "area");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return no_area_nssa_range_magic(self, vty, argc, argv, area, &prefix, prefix_str, cost, cost_str);
}

