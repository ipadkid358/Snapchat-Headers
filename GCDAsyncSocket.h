/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCDAsyncSocketDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <Snapchat/Snapchat-Structs.h>
@class NSObject, NSURL, NSData, NSMutableArray, GCDAsyncReadPacket, GCDAsyncWritePacket, GCDAsyncSocketPreBuffer, NSString;

@interface GCDAsyncSocket : NSObject {

	unsigned flags;
	unsigned short config;
	id<GCDAsyncSocketDelegate> delegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	int socket4FD;
	int socket6FD;
	int socketUN;
	NSURL* socketUrl;
	int stateIndex;
	NSData* connectInterface4;
	NSData* connectInterface6;
	NSData* connectInterfaceUN;
	NSObject*<OS_dispatch_queue> socketQueue;
	NSObject*<OS_dispatch_source> accept4Source;
	NSObject*<OS_dispatch_source> accept6Source;
	NSObject*<OS_dispatch_source> acceptUNSource;
	NSObject*<OS_dispatch_source> connectTimer;
	NSObject*<OS_dispatch_source> readSource;
	NSObject*<OS_dispatch_source> writeSource;
	NSObject*<OS_dispatch_source> readTimer;
	NSObject*<OS_dispatch_source> writeTimer;
	NSMutableArray* readQueue;
	NSMutableArray* writeQueue;
	GCDAsyncReadPacket* currentRead;
	GCDAsyncWritePacket* currentWrite;
	unsigned long long socketFDBytesAvailable;
	GCDAsyncSocketPreBuffer* preBuffer;
	SCD_Struct_GC450* streamContext;
	CFReadStreamRef readStream;
	CFWriteStreamRef writeStream;
	SSLContextRef sslContext;
	GCDAsyncSocketPreBuffer* sslPreBuffer;
	unsigned long long sslWriteCachedLength;
	int sslErrCode;
	int lastSSLHandshakeError;
	void* IsOnSocketQueueOrTargetQueueKey;
	id userData;
	double alternateAddressDelay;

}

@property (__weak) id<GCDAsyncSocketDelegate> delegate; 
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (getter=isIPv4Enabled) BOOL IPv4Enabled; 
@property (getter=isIPv6Enabled) BOOL IPv6Enabled; 
@property (getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6; 
@property (assign) double alternateAddressDelay; 
@property (retain) id userData; 
@property (readonly) BOOL isDisconnected; 
@property (readonly) BOOL isConnected; 
@property (readonly) NSString * connectedHost; 
@property (readonly) unsigned short connectedPort; 
@property (readonly) NSURL * connectedUrl; 
@property (readonly) NSString * localHost; 
@property (readonly) unsigned short localPort; 
@property (readonly) NSData * connectedAddress; 
@property (readonly) NSData * localAddress; 
@property (readonly) BOOL isIPv4; 
@property (readonly) BOOL isIPv6; 
@property (readonly) BOOL isSecure; 
@property (assign) BOOL autoDisconnectOnClosedReadStream; 
+(id)hostFromAddress:(id)arg1 ;
+(id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id*)arg3 ;
+(BOOL)isIPv4Address:(id)arg1 ;
+(BOOL)isIPv6Address:(id)arg1 ;
+(unsigned short)portFromAddress:(id)arg1 ;
+(id)hostFromSockaddr4:(const sockaddr_in*)arg1 ;
+(id)hostFromSockaddr6:(const sockaddr_in6*)arg1 ;
+(unsigned short)portFromSockaddr4:(const sockaddr_in*)arg1 ;
+(unsigned short)portFromSockaddr6:(const sockaddr_in6*)arg1 ;
+(id)urlFromSockaddrUN:(const sockaddr_un*)arg1 ;
+(void)cfstreamThread;
+(void)startCFStreamThreadIfNeeded;
+(void)scheduleCFStreams:(id)arg1 ;
+(void)unscheduleCFStreams:(id)arg1 ;
+(void)stopCFStreamThreadIfNeeded;
+(id)gaiError:(int)arg1 ;
+(BOOL)getHost:(id*)arg1 port:(unsigned short*)arg2 fromAddress:(id)arg3 ;
+(BOOL)getHost:(id*)arg1 port:(unsigned short*)arg2 family:(char*)arg3 fromAddress:(id)arg4 ;
+(id)CRLFData;
+(id)CRData;
+(id)LFData;
+(id)ZeroData;
+(void)ignore:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3 ;
-(void)setDelegate:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)setDelegateQueue:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(BOOL)arg3 ;
-(BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id*)arg3 ;
-(id)errnoErrorWithReason:(id)arg1 ;
-(id)badConfigError:(id)arg1 ;
-(void)getInterfaceAddress4:(id*)arg1 address6:(id*)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4 ;
-(id)badParamError:(id)arg1 ;
-(unsigned short)localPort4;
-(BOOL)doAccept:(int)arg1 ;
-(id)otherError:(id)arg1 ;
-(id)getInterfaceAddressFromUrl:(id)arg1 ;
-(void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1 ;
-(BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id*)arg5 ;
-(BOOL)preConnectWithInterface:(id)arg1 error:(id*)arg2 ;
-(void)lookup:(int)arg1 didFail:(id)arg2 ;
-(void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3 ;
-(void)startConnectTimeout:(double)arg1 ;
-(BOOL)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id*)arg3 ;
-(BOOL)preConnectWithUrl:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectWithAddressUN:(id)arg1 error:(id*)arg2 ;
-(void)endConnectTimeout;
-(BOOL)bindSocket:(int)arg1 toInterface:(id)arg2 error:(id*)arg3 ;
-(void)closeUnusedSocket:(int)arg1 ;
-(void)didConnect:(int)arg1 ;
-(int)socket4FD;
-(int)socket6FD;
-(void)didNotConnect:(int)arg1 error:(id)arg2 ;
-(int)createSocket:(int)arg1 connectInterface:(id)arg2 errPtr:(id*)arg3 ;
-(void)connectSocket:(int)arg1 address:(id)arg2 stateIndex:(int)arg3 ;
-(BOOL)createReadAndWriteStream;
-(BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg1 ;
-(BOOL)addStreamsToRunLoop;
-(BOOL)openStreams;
-(NSString *)connectedHost;
-(unsigned short)connectedPort;
-(NSURL *)connectedUrl;
-(void)maybeDequeueRead;
-(void)maybeDequeueWrite;
-(void)doConnectTimeout;
-(id)connectTimeoutError;
-(void)endCurrentRead;
-(void)endCurrentWrite;
-(void)removeStreamsFromRunLoop;
-(void)resumeReadSource;
-(void)resumeWriteSource;
-(void)maybeClose;
-(id)connectedHostFromSocket4:(int)arg1 ;
-(id)connectedHostFromSocket6:(int)arg1 ;
-(unsigned short)connectedPortFromSocket4:(int)arg1 ;
-(unsigned short)connectedPortFromSocket6:(int)arg1 ;
-(id)connectedUrlFromSocketUN:(int)arg1 ;
-(id)localHostFromSocket4:(int)arg1 ;
-(id)localHostFromSocket6:(int)arg1 ;
-(unsigned short)localPortFromSocket4:(int)arg1 ;
-(unsigned short)localPortFromSocket6:(int)arg1 ;
-(void)doReadData;
-(void)doReadEOF;
-(void)doWriteData;
-(void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5 ;
-(void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6 ;
-(void)maybeStartTLS;
-(void)setupReadTimerWithTimeout:(double)arg1 ;
-(void)flushSSLBuffers;
-(BOOL)usingCFStreamForTLS;
-(void)suspendReadSource;
-(BOOL)usingSecureTransportForTLS;
-(void)ssl_continueSSLHandshake;
-(id)readMaxedOutError;
-(id)sslError:(int)arg1 ;
-(void)completeCurrentRead;
-(id)connectionClosedError;
-(void)doReadTimeout;
-(void)doReadTimeoutWithExtension:(double)arg1 ;
-(id)readTimeoutError;
-(void)setupWriteTimerWithTimeout:(double)arg1 ;
-(void)suspendWriteSource;
-(void)completeCurrentWrite;
-(void)doWriteTimeout;
-(void)doWriteTimeoutWithExtension:(double)arg1 ;
-(id)writeTimeoutError;
-(void)ssl_startTLS;
-(void)cf_startTLS;
-(void)ssl_shouldTrustPeer:(BOOL)arg1 stateIndex:(int)arg2 ;
-(BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)arg1 ;
-(id)initWithSocketQueue:(id)arg1 ;
-(void)synchronouslySetDelegate:(id)arg1 ;
-(void)synchronouslySetDelegateQueue:(id)arg1 ;
-(void)getDelegate:(id*)arg1 delegateQueue:(id*)arg2 ;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(BOOL)isIPv4Enabled;
-(void)setIPv4Enabled:(BOOL)arg1 ;
-(BOOL)isIPv6Enabled;
-(BOOL)isIPv4PreferredOverIPv6;
-(void)setIPv4PreferredOverIPv6:(BOOL)arg1 ;
-(double)alternateAddressDelay;
-(void)setAlternateAddressDelay:(double)arg1 ;
-(BOOL)acceptOnPort:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)acceptOnUrl:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)connectToAddress:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(BOOL)connectToUrl:(id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(void)disconnectAfterReading;
-(void)disconnectAfterWriting;
-(void)disconnectAfterReadingAndWriting;
-(id)errnoError;
-(NSString *)localHost;
-(id)connectedHost4;
-(id)connectedHost6;
-(unsigned short)connectedPort4;
-(unsigned short)connectedPort6;
-(id)localHost4;
-(id)localHost6;
-(unsigned short)localPort6;
-(NSData *)connectedAddress;
-(BOOL)isIPv4;
-(void)readDataWithTimeout:(double)arg1 tag:(long long)arg2 ;
-(void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4 ;
-(void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4 ;
-(float)progressOfReadReturningTag:(long long*)arg1 bytesDone:(unsigned long long*)arg2 total:(unsigned long long*)arg3 ;
-(void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(float)progressOfWriteReturningTag:(long long*)arg1 bytesDone:(unsigned long long*)arg2 total:(unsigned long long*)arg3 ;
-(void)startTLS:(id)arg1 ;
-(int)sslReadWithBuffer:(void*)arg1 length:(unsigned long long*)arg2 ;
-(int)sslWriteWithBuffer:(const void*)arg1 length:(unsigned long long*)arg2 ;
-(void)cf_finishSSLHandshake;
-(void)cf_abortSSLHandshake:(id)arg1 ;
-(BOOL)autoDisconnectOnClosedReadStream;
-(void)setAutoDisconnectOnClosedReadStream:(BOOL)arg1 ;
-(void)markSocketQueueTargetQueue:(id)arg1 ;
-(void)unmarkSocketQueueTargetQueue:(id)arg1 ;
-(int)socketFD;
-(CFReadStreamRef)readStream;
-(CFWriteStreamRef)writeStream;
-(BOOL)enableBackgroundingOnSocket;
-(BOOL)enableBackgroundingOnSocketWithCaveat;
-(SSLContextRef)sslContext;
-(void)writeDataWithLengthPrefix:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 ;
-(id)init;
-(void)setDelegate:(id<GCDAsyncSocketDelegate>)arg1 ;
-(void)dealloc;
-(id<GCDAsyncSocketDelegate>)delegate;
-(BOOL)isSecure;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)disconnect;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)isConnected;
-(void)closeSocket:(int)arg1 ;
-(unsigned short)localPort;
-(BOOL)isDisconnected;
-(void)setIPv6Enabled:(BOOL)arg1 ;
-(void)closeWithError:(id)arg1 ;
-(BOOL)isIPv6;
-(NSData *)localAddress;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
@end
