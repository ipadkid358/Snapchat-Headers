/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchSectionHeaderModel, NSArray, SCSearchQuery;

@interface SCSearchUserCardCarouselSectionConfiguration : NSObject <NSCopying> {

	SCSearchSectionHeaderModel* _sectionHeaderModel;
	NSArray* _userViewModels;
	SCSearchQuery* _query;

}

@property (nonatomic,copy,readonly) SCSearchSectionHeaderModel * sectionHeaderModel;              //@synthesize sectionHeaderModel=_sectionHeaderModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userViewModels;                                     //@synthesize userViewModels=_userViewModels - In the implementation block
@property (nonatomic,copy,readonly) SCSearchQuery * query;                                        //@synthesize query=_query - In the implementation block
-(SCSearchSectionHeaderModel *)sectionHeaderModel;
-(id)initWithSectionHeaderModel:(id)arg1 userViewModels:(id)arg2 query:(id)arg3 ;
-(NSArray *)userViewModels;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCSearchQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

