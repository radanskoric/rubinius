ruby_version_is "1.9" do
  require File.expand_path('../../../shared/rational/abs', __FILE__)

  describe "Rational#abs" do
    it_behaves_like(:rational_abs, :magnitude)
  end
end
