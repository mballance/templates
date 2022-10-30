/**
 * {{name}}.h
 *
 * Created on:
 *     Author: 
 */
{% set filename = "{{name}}.h" -%}

#pragma once

{% if NS != "" -%}
namespace {{NS}} {
{% endif %}

class {{name}} {
public:
    {{name}}();

    virtual ~{{name}}();

};

{% if NS != "" -%}
}
{% endif %}

