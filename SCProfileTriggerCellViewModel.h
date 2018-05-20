/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString, NSObject, SCProfileTriggerCellActionButtonViewModel, SCSearchActionModel, SCProfileTriggerCellLayoutAttributes;

@interface SCProfileTriggerCellViewModel : NSObject <NSCopying> {

	BOOL _showBadge;
	NSString* _titleText;
	NSString* _subtitleText;
	NSObject*<NSCopying> _iconViewModel;
	SCProfileTriggerCellActionButtonViewModel* _actionButtonViewModel;
	SCSearchActionModel* _tapActionModel;
	SCSearchActionModel* _actionButtonTapActionModel;
	SCProfileTriggerCellLayoutAttributes* _layoutAttributes;

}

@property (nonatomic,copy,readonly) NSString * titleText;                                                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;                                                        //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCopying> iconViewModel;                                             //@synthesize iconViewModel=_iconViewModel - In the implementation block
@property (nonatomic,copy,readonly) SCProfileTriggerCellActionButtonViewModel * actionButtonViewModel;              //@synthesize actionButtonViewModel=_actionButtonViewModel - In the implementation block
@property (nonatomic,readonly) BOOL showBadge;                                                                      //@synthesize showBadge=_showBadge - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapActionModel;                                           //@synthesize tapActionModel=_tapActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * actionButtonTapActionModel;                               //@synthesize actionButtonTapActionModel=_actionButtonTapActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCProfileTriggerCellLayoutAttributes * layoutAttributes;                        //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
-(SCProfileTriggerCellActionButtonViewModel *)actionButtonViewModel;
-(SCSearchActionModel *)tapActionModel;
-(NSObject*<NSCopying>)iconViewModel;
-(id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 iconViewModel:(id)arg3 actionButtonViewModel:(id)arg4 showBadge:(BOOL)arg5 tapActionModel:(id)arg6 actionButtonTapActionModel:(id)arg7 layoutAttributes:(id)arg8 ;
-(SCSearchActionModel *)actionButtonTapActionModel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCProfileTriggerCellLayoutAttributes *)layoutAttributes;
-(NSString *)titleText;
-(BOOL)showBadge;
-(NSString *)subtitleText;
@end
