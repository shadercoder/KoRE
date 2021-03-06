﻿/*
  Copyright � 2012 The KoRE Project

  This file is part of KoRE.

  KoRE is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  KoRE is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with KoRE.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KORE_USE_SHADERPROGRAM_
#define KORE_USE_SHADERPROGRAM_

#include "KoRE/Common.h"
#include "KoRE/Operations/Operation.h"
#include "KoRE/ShaderProgram.h"

namespace kore {
  class UseShaderProgram : public Operation {
  public:
    explicit UseShaderProgram();
    explicit UseShaderProgram(const ShaderProgram* program);
    virtual ~UseShaderProgram();

    virtual void update(void);
    virtual void reset(void);
    virtual bool isValid(void) const;
    virtual bool dependsOn(const void* thing) const;

    void connect(const ShaderProgram* program);

  private:
    const ShaderProgram* _program;

    virtual void doExecute(void) const;
  };
}


#endif  // KORE_USE_SHADERPROGRAM_
