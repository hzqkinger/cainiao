ENTRY(nomain)

SECTIONS
{
	. = 0x08048000 + SIZEOF_HEADERS;

	tinytex : { *(.text) *(.data) *(.rodata) }

	/DISCARD/ : { *(.comment) }
}
