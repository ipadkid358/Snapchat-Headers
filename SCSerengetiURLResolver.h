/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSerengetiURLResolverDelegate;
@class NSURL, NSString, SCSerengetiRegistry, SCUserSession;

@interface SCSerengetiURLResolver : NSObject {

	NSURL* _url;
	NSString* _registryId;
	SCSerengetiRegistry* _registry;
	SCUserSession* _userSession;
	BOOL _cancelled;
	id<SCSerengetiURLResolverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSerengetiURLResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didLoadResolvedService:(id)arg1 shouldRevalidate:(BOOL)arg2 didReloadRegistry:(BOOL)arg3 ;
-(void)_reloadRegistryWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 registryId:(id)arg2 registry:(id)arg3 userSession:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<SCSerengetiURLResolverDelegate>)arg1 ;
-(id<SCSerengetiURLResolverDelegate>)delegate;
-(void)start;
@end

