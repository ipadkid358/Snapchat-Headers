/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject;

@interface SCGeofilterDependencyFetcher : NSObject {

	BOOL _hasErrors;
	NSString* _domain;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (assign,nonatomic) BOOL hasErrors;                                          //@synthesize hasErrors=_hasErrors - In the implementation block
@property (nonatomic,retain) NSString * domain;                                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(void)setHasErrors:(BOOL)arg1 ;
-(void)fetchURLData:(id)arg1 itemCompletion:(/*^block*/id)arg2 ;
-(BOOL)hasErrors;
-(void)fetchURLImage:(id)arg1 itemCompletion:(/*^block*/id)arg2 ;
-(void)setGroupCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)domain;
-(id)initWithDomain:(id)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)setDomain:(NSString *)arg1 ;
@end

