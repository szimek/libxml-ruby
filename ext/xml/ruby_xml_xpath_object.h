/* $Id $ */

#ifndef __RUBY_XML_XPATH_OBJECT__
#define __RUBY_XML_XPATH_OBJECT__

extern VALUE cXMLXPathObject;

typedef struct ruby_xml_xpath_object_s {
  xmlXPathObjectPtr xpop;
} ruby_xml_xpath_object;

VALUE ruby_xml_xpath_object_wrap(xmlXPathObjectPtr xpop);

void ruby_init_xml_xpath_object(void);

#endif
