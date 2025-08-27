import nanobind_example as m

import pytest


def test_runtime():
    with pytest.raises(RuntimeError):
        assert m.runtime()
#
#
# def test_builtin():
#     with pytest.raises(IndexError):
#         assert m.builtin()
