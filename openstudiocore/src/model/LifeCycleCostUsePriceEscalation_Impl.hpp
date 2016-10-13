/***********************************************************************************************************************
 *  OpenStudio(R), Copyright (c) 2008-2016, Alliance for Sustainable Energy, LLC. All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 *  following conditions are met:
 *
 *  (1) Redistributions of source code must retain the above copyright notice, this list of conditions and the following
 *  disclaimer.
 *
 *  (2) Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *  following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *  (3) Neither the name of the copyright holder nor the names of any contributors may be used to endorse or promote
 *  products derived from this software without specific prior written permission from the respective party.
 *
 *  (4) Other than as required in clauses (1) and (2), distributions in any form of modifications or other derivative
 *  works may not use the "OpenStudio" trademark, "OS", "os", or any other confusingly similar designation without
 *  specific prior written permission from Alliance for Sustainable Energy, LLC.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER, THE UNITED STATES GOVERNMENT, OR ANY CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **********************************************************************************************************************/

#ifndef MODEL_LIFECYCLECOSTUSEPRICEESCALATION_IMPL_HPP
#define MODEL_LIFECYCLECOSTUSEPRICEESCALATION_IMPL_HPP

#include "ParentObject_Impl.hpp"
#include "LifeCycleCostUsePriceEscalation.hpp"
#include "../utilities/core/Optional.hpp"

namespace openstudio {
namespace model {
namespace detail {

class MODEL_API LifeCycleCostUsePriceEscalation_Impl : public ParentObject_Impl{
 public:
  // constructor
  LifeCycleCostUsePriceEscalation_Impl(const IdfObject& idfObject, Model_Impl* model, bool keepHandle);

  // construct from workspace
  LifeCycleCostUsePriceEscalation_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                 Model_Impl* model,
                 bool keepHandle);

  // clone copy constructor
  LifeCycleCostUsePriceEscalation_Impl(const LifeCycleCostUsePriceEscalation_Impl& other,Model_Impl* model,bool keepHandle);

  // virtual destructor
  virtual ~LifeCycleCostUsePriceEscalation_Impl(){}

  OptionalString resource() const;
  void setResource(const std::string& str);

  OptionalString escalationStartMonth() const;
  void setEscalationStartMonth(const std::string& str);

  OptionalInt escalationStartYear() const;
  void setEscalationStartYear(int num);

  boost::optional<double> yearEscalation(unsigned index) const;
  bool setYearEscalation(unsigned index, double num);

  unsigned numYears() const;

  // return the parent object in the hierarchy
  virtual boost::optional<ParentObject> parent() const override;

  // set the parent, child may have to call methods on the parent
  virtual bool setParent(ParentObject& newParent) override;

  // return any children objects in the hierarchy
  virtual std::vector<ModelObject> children() const override;

  /// get a vector of allowable children types
  virtual std::vector<IddObjectType> allowableChildTypes() const override;

  // Get all output variable names that could be associated with this object.
  virtual const std::vector<std::string>& outputVariableNames() const override;

  virtual IddObjectType iddObjectType() const override {return LifeCycleCostUsePriceEscalation::iddObjectType();}

private:
  REGISTER_LOGGER("openstudio.model.LifeCycleCostUsePriceEscalation");

};

} // detail
} // model
} // openstudio

#endif // MODEL_LIFECYCLECOSTUSEPRICEESCALATION_IMPL_HPP
