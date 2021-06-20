import formsPlugin from 'windicss/plugin/forms'
module.exports = {
  extract: {
    include: ['./**/*.html'],
  },
  darkMode:'class',
  theme: {
    extend: {
      
      container: {
        center: true
      },
      margin: {
        '-106': '26rem'
      },
    }
  },
  variants: {
    extend: {}
  },
  plugins: [formsPlugin]
}
