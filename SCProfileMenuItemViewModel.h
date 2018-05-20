/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchActionModel;

@interface SCProfileMenuItemViewModel : NSObject <NSCopying> {

	BOOL _isActive;
	BOOL _toggleState;
	long long _type;
	NSString* _label;
	NSString* _buttonIconAsset;
	SCSearchActionModel* _actionModel;
	long long _fontColor;

}

@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                       //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonIconAsset;                     //@synthesize buttonIconAsset=_buttonIconAsset - In the implementation block
@property (nonatomic,readonly) BOOL toggleState;                                    //@synthesize toggleState=_toggleState - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * actionModel;              //@synthesize actionModel=_actionModel - In the implementation block
@property (nonatomic,readonly) long long fontColor;                                 //@synthesize fontColor=_fontColor - In the implementation block
-(SCSearchActionModel *)actionModel;
-(id)initWithType:(long long)arg1 label:(id)arg2 isActive:(BOOL)arg3 buttonIconAsset:(id)arg4 toggleState:(BOOL)arg5 actionModel:(id)arg6 fontColor:(long long)arg7 ;
-(NSString *)buttonIconAsset;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isActive;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(long long)fontColor;
-(BOOL)toggleState;
@end
