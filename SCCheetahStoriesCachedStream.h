/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSDictionary;

@interface SCCheetahStoriesCachedStream : NSObject <NSCopying, NSCoding> {

	BOOL _isDiscoverTabEnabled;
	NSArray* _tabs;
	NSArray* _stories;
	NSDictionary* _tabDataModelsByFeedType;

}

@property (nonatomic,copy,readonly) NSArray * tabs;                                      //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stories;                                   //@synthesize stories=_stories - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tabDataModelsByFeedType;              //@synthesize tabDataModelsByFeedType=_tabDataModelsByFeedType - In the implementation block
@property (nonatomic,readonly) BOOL isDiscoverTabEnabled;                                //@synthesize isDiscoverTabEnabled=_isDiscoverTabEnabled - In the implementation block
-(NSArray *)stories;
-(id)initWithTabs:(id)arg1 stories:(id)arg2 tabDataModelsByFeedType:(id)arg3 isDiscoverTabEnabled:(BOOL)arg4 ;
-(NSDictionary *)tabDataModelsByFeedType;
-(BOOL)isDiscoverTabEnabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tabs;
@end
