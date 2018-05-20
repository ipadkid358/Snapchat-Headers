/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, SCSearchActionModel;

@interface SCCheetahSendToHeaderViewModel : NSObject <NSCopying> {

	NSString* _titleText;
	NSString* _subTitleText;
	NSString* _buttonText;
	NSString* _buttonAccessibilityIdentifier;
	UIImage* _buttonIconImage;
	SCSearchActionModel* _actionModel;

}

@property (nonatomic,copy,readonly) NSString * titleText;                                  //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subTitleText;                               //@synthesize subTitleText=_subTitleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                                 //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonAccessibilityIdentifier;              //@synthesize buttonAccessibilityIdentifier=_buttonAccessibilityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) UIImage * buttonIconImage;                             //@synthesize buttonIconImage=_buttonIconImage - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * actionModel;                     //@synthesize actionModel=_actionModel - In the implementation block
-(SCSearchActionModel *)actionModel;
-(id)initWithTitleText:(id)arg1 subTitleText:(id)arg2 buttonText:(id)arg3 buttonAccessibilityIdentifier:(id)arg4 buttonIconImage:(id)arg5 actionModel:(id)arg6 ;
-(NSString *)subTitleText;
-(NSString *)buttonAccessibilityIdentifier;
-(UIImage *)buttonIconImage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)titleText;
-(NSString *)buttonText;
@end

