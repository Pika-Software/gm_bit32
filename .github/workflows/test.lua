timer.Simple(0, engine.CloseServer)

assert(CI, 'tests expected to be running on configured dedicated server')

local function run_tests()
    require('bit32')
	PrintTable(bit32)
	print('Default bit library (overflowing):')
	print("1 << -1 = ", bit.lshift(1, -1))
	print("8450794 << 8 = ", bit.lshift(8450794, 8))
	print('Module bit32 library:')
	print("1 << -1 = ", bit32.lshift(1, -1))
	print("8450794 << 8 = ", bit32.lshift(8450794, 8))

	error('simple error')
end

print('Running tests')
run_tests()
print('Tests are successful!')

file.Write('success.txt', GITHUB_SHA)