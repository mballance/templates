/*
 * {{name}}.cpp
 *
 * Created on:
 *     Author:
 */
{% set filename = "{{name}}.cpp" -%}

#include "{{name}}.h"


{% if NS != "" -%}
namespace {{NS}} {
{% endif -%}

{{name}}::{{name}}() {

}

{{name}}::~{{name}}() {

}

{% if NS != "" -%}
}
{% endif -%}
