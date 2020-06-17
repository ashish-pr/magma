#!/usr/bin/env python3
# @generated AUTOGENERATED file. Do not Change!

from dataclasses import dataclass
from datetime import datetime
from functools import partial
from gql.gql.datetime_utils import DATETIME_FIELD
from numbers import Number
from typing import Any, Callable, List, Mapping, Optional

from dataclasses_json import DataClassJsonMixin

from gql.gql.enum_utils import enum_field
from ..enum.work_order_priority import WorkOrderPriority
from ..enum.work_order_status import WorkOrderStatus

from ..input.check_list_category import CheckListCategoryInput
from ..input.check_list_item import CheckListItemInput
from ..input.property import PropertyInput
@dataclass
class AddWorkOrderInput(DataClassJsonMixin):
    name: str
    workOrderTypeId: str
    properties: List[PropertyInput]
    checkList: List[CheckListItemInput]
    checkListCategories: List[CheckListCategoryInput]
    description: Optional[str] = None
    locationId: Optional[str] = None
    projectId: Optional[str] = None
    ownerName: Optional[str] = None
    ownerId: Optional[str] = None
    assignee: Optional[str] = None
    assigneeId: Optional[str] = None
    index: Optional[int] = None
    status: Optional[WorkOrderStatus] = None
    priority: Optional[WorkOrderPriority] = None
