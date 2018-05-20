/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaEventListener.h>

@class NSString;

@interface SCOperaEventListenerAnnouncer : NSObject <SCOperaEventListener> {

	mutex _mutex;
	shared_ptr<std::__1::map<NSString *, std::__1::shared_ptr<std::__1::vector<__weak id<SCOperaEventListener>, std::__1::allocator<__weak id<SCOperaEventListener> > > >, std::__1::less<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, std::__1::shared_ptr<std::__1::vector<__weak id<SCOperaEventListener>, std::__1::allocator<__weak id<SCOperaEventListener> > > > > > > >* _eventToListenersMap;
	shared_ptr<std::__1::map<__weak id<SCOperaEventListener>, std::__1::shared_ptr<std::__1::set<NSString *, std::__1::less<NSString *>, std::__1::allocator<NSString *> > >, std::__1::less<__weak id<SCOperaEventListener> >, std::__1::allocator<std::__1::pair<const __weak id<SCOperaEventListener>, std::__1::shared_ptr<std::__1::set<NSString *, std::__1::less<NSString *>, std::__1::allocator<NSString *> > > > > > >* _listenerToEventsMap;
	shared_ptr<std::__1::map<NSString *, __weak id<SCOperaEventListener>, std::__1::less<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, __weak id<SCOperaEventListener> > > > >* _eventToHighPriorityListenerMap;
	shared_ptr<std::__1::map<__weak id<SCOperaEventListener>, std::__1::shared_ptr<std::__1::set<NSString *, std::__1::less<NSString *>, std::__1::allocator<NSString *> > >, std::__1::less<__weak id<SCOperaEventListener> >, std::__1::allocator<std::__1::pair<const __weak id<SCOperaEventListener>, std::__1::shared_ptr<std::__1::set<NSString *, std::__1::less<NSString *>, std::__1::allocator<NSString *> > > > > > >* _highPriorityListenerToEventsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeHighPriorityListener:(id)arg1 ;
-(id)_paramsWithTimestamp:(id)arg1 ;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(void)addListener:(id)arg1 events:(id)arg2 ;
-(void)addHighPriorityListener:(id)arg1 events:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
@end
