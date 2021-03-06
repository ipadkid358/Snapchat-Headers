/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchActionModel;

@interface SCOurStorySettingsViewModel : NSObject <NSCopying> {

	NSString* _id;
	NSString* _titleText;
	NSString* _timeAgo;
	unsigned long long _viewCount;
	unsigned long long _screenshotCount;
	SCSearchActionModel* _tapCellActionModel;
	SCSearchActionModel* _tapDeleteButtonActionModel;
	SCSearchActionModel* _tapSaveButtonActionModel;
	long long _savingState;

}

@property (nonatomic,copy,readonly) NSString * id;                                                 //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeAgo;                                            //@synthesize timeAgo=_timeAgo - In the implementation block
@property (nonatomic,readonly) unsigned long long viewCount;                                       //@synthesize viewCount=_viewCount - In the implementation block
@property (nonatomic,readonly) unsigned long long screenshotCount;                                 //@synthesize screenshotCount=_screenshotCount - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapCellActionModel;                      //@synthesize tapCellActionModel=_tapCellActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapDeleteButtonActionModel;              //@synthesize tapDeleteButtonActionModel=_tapDeleteButtonActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapSaveButtonActionModel;                //@synthesize tapSaveButtonActionModel=_tapSaveButtonActionModel - In the implementation block
@property (nonatomic,readonly) long long savingState;                                              //@synthesize savingState=_savingState - In the implementation block
-(unsigned long long)screenshotCount;
-(id)initWithId:(id)arg1 titleText:(id)arg2 timeAgo:(id)arg3 viewCount:(unsigned long long)arg4 screenshotCount:(unsigned long long)arg5 tapCellActionModel:(id)arg6 tapDeleteButtonActionModel:(id)arg7 tapSaveButtonActionModel:(id)arg8 savingState:(long long)arg9 ;
-(NSString *)timeAgo;
-(SCSearchActionModel *)tapCellActionModel;
-(SCSearchActionModel *)tapDeleteButtonActionModel;
-(SCSearchActionModel *)tapSaveButtonActionModel;
-(long long)savingState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)titleText;
-(unsigned long long)viewCount;
-(NSString *)id;
@end

