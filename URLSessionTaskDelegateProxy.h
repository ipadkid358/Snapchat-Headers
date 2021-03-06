/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol NSURLSessionDelegate;
@class NSString;

@interface URLSessionTaskDelegateProxy : NSProxy <NSURLSessionTaskDelegate> {

	id<NSURLSessionDelegate> _delegate;
	BOOL _respondsToDidFinishCollectingMetrics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
@end

