/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchQuery;

@interface SCSearchSimpleQueryResultSectionConfiguration : NSObject <NSCopying> {

	SCSearchQuery* _query;

}

@property (nonatomic,copy,readonly) SCSearchQuery * query;              //@synthesize query=_query - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCSearchQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQuery:(id)arg1 ;
@end
