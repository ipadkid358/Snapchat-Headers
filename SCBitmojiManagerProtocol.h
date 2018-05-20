/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCBitmojiManagerProtocol <NSObject>
@required
-(BOOL)isBitmojiCached:(id)arg1 feature:(long long)arg2;
-(id)fetchBitmojiImageData:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(/*^block*/id)arg4 completionQueue:(id)arg5 completionBlock:(/*^block*/id)arg6;
-(id)prefetchBitmojiImage:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(id)fetchBitmojiImage:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(id)fetchCurrentOrPrior:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(/*^block*/id)arg4 completionQueue:(id)arg5 completionBlock:(/*^block*/id)arg6;

@end
