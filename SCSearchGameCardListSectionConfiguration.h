/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SCSearchQuery;

@interface SCSearchGameCardListSectionConfiguration : NSObject <NSCopying> {

	BOOL _shouldEnablePostViewStates;
	NSString* _sectionTitle;
	NSArray* _sportsGames;
	long long _cellStyle;
	SCSearchQuery* _searchQuery;

}

@property (nonatomic,copy,readonly) NSString * sectionTitle;                  //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sportsGames;                    //@synthesize sportsGames=_sportsGames - In the implementation block
@property (nonatomic,readonly) long long cellStyle;                           //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,copy,readonly) SCSearchQuery * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnablePostViewStates;               //@synthesize shouldEnablePostViewStates=_shouldEnablePostViewStates - In the implementation block
-(id)initWithSectionTitle:(id)arg1 sportsGames:(id)arg2 cellStyle:(long long)arg3 searchQuery:(id)arg4 shouldEnablePostViewStates:(BOOL)arg5 ;
-(BOOL)shouldEnablePostViewStates;
-(NSArray *)sportsGames;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCSearchQuery *)searchQuery;
-(NSString *)sectionTitle;
-(long long)cellStyle;
@end

