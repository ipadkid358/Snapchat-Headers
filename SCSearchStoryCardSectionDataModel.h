/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchQuery, NSString, NSArray, SCSearchStoryCardColorTheme;

@interface SCSearchStoryCardSectionDataModel : NSObject <NSCopying> {

	SCSearchQuery* _query;
	NSString* _resultContentIdentifier;
	NSArray* _dynamicStories;
	long long _cellStyle;
	long long _aggregationCellStyle;
	SCSearchStoryCardColorTheme* _cellColorTheme;

}

@property (nonatomic,copy,readonly) SCSearchQuery * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultContentIdentifier;                        //@synthesize resultContentIdentifier=_resultContentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dynamicStories;                                  //@synthesize dynamicStories=_dynamicStories - In the implementation block
@property (nonatomic,readonly) long long cellStyle;                                            //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) long long aggregationCellStyle;                                 //@synthesize aggregationCellStyle=_aggregationCellStyle - In the implementation block
@property (nonatomic,copy,readonly) SCSearchStoryCardColorTheme * cellColorTheme;              //@synthesize cellColorTheme=_cellColorTheme - In the implementation block
-(NSArray *)dynamicStories;
-(id)initWithQuery:(id)arg1 resultContentIdentifier:(id)arg2 dynamicStories:(id)arg3 cellStyle:(long long)arg4 aggregationCellStyle:(long long)arg5 cellColorTheme:(id)arg6 ;
-(NSString *)resultContentIdentifier;
-(long long)aggregationCellStyle;
-(SCSearchStoryCardColorTheme *)cellColorTheme;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCSearchQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)cellStyle;
@end
