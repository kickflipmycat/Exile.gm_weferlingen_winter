darkMapFixRunning = true;
while {darkMapFixRunning} do {
    call {
        private _lightBrightness = getLighting select 1;

        if (4 < _lightBrightness && _lightBrightness < 120) exitWith {
            setApertureNew [4, 6, 9, 0.9];
        };

        if (_lightBrightness < 4) exitWith {
            private _minAperture = linearConversion [0, 4, _lightBrightness, 1, 3, true];
            setApertureNew [_minAperture, 6, 9, 0.9];
        };

        setAperture -1;
    };
    sleep 15;
};